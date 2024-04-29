class Node {
    constructor(item) {
      this.item = item;
      this.next = null;
      this.prev = null;
    }
  }
  
  class EventEmitter {
    constructor() {
      this._events = {};
    }
  
    subscribe(eventName, callback) {
      if (!(eventName in this._events)) {
        const head = new Node(null);
        const tail = new Node(null);
        head.next = tail;
        tail.prev = head;
  
        this._events[eventName] = {head, tail};
      }
  
      const listeners = this._events[eventName];
      const newListener = new Node(callback);
  
      listeners.tail.prev.next = newListener;
      newListener.prev = listeners.tail.prev;
      listeners.tail.prev = newListener;
      newListener.next = listeners.tail;
  
      return {
        unsubscribe: () => {
          newListener.prev.next = newListener.next;
          newListener.next.prev = newListener.prev;
        }
      };
    }
    
    emit(eventName, args = []) {
      const results = []
      const listeners = this._events[eventName] ?? {
        head: {next: {item: null}}
      };
      let currentListener = listeners.head;
      
      while (currentListener.next.item) {
        const fn = currentListener.next.item;
        results.push(fn(...args));
  
        currentListener = currentListener.next;
      }
  
      return results;
    }
  }
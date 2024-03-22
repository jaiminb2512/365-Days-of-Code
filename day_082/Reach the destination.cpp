bool reachDestination(int sx, int sy, int dx, int dy )
{
    
    if (sx == dx && sy == dy) 
    {
		return true;
	}

	if (sx > dx || sy > dy) 
    {
		return false;
	}

	if (dx > dy) 
    {
		return reachDestination(sx, sy, dx - dy, dy);
	} 
    else 
    {
		return reachDestination(sx, sy, dx, dy - dx);
	}
}
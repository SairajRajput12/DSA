bool solve(int s, int s1, int d, int d1) {
    if (s == d && s1 == d1) {
        return true;
    }

    if (s > d || s1 > d1) {
        return false;
    }
    
    if (solve((s + s1), s1, d, d1)) {
        return true;
    } else if (solve(s, (s + s1), d, d1)) {
        return true;
    }

    return false;
}

bool reachDestination(int sx, int sy, int dx, int dy) {
    return solve(sx, sy, dx, dy);
}

struct Seg {

    // 0-indexed seg tree
    vector<ll> seg;
    ll ZERO = 0;
    Seg(const vector<int> &a) { build(0, 0, a.size() - 1, a); }
    void merge(const int &a, const int &b, int &c) {
        // c = max(a, b);
        // c = min(a, b);
        c = a + b;
        // c = __gcd(a, b);
    }
    void build(ll pos, ll ss, ll se, const vector<int> &a) {
        if (pos == 0)
            seg.resize(4 * (se + 1) + 1);
        if (ss == se) {
            seg[pos] = a[ss];
            return;
        }
        ll mid = (ss + se) / 2;
        build(2 * pos + 1, ss, mid, a);
        build(2 * pos + 2, mid + 1, se, a);
        merge(seg[2 * pos + 1], seg[2 * pos + 2], seg[pos]);
    }
    ll query(ll pos, ll ss, ll se, ll l, ll r) {
        if (l > se || r < ss)
            return ZERO;
        if (ss >= l && se <= r)
            return seg[pos];
        ll mid = (ss + se) / 2;
        ll q1 = query(2 * pos + 1, ss, mid, l, r);
        ll q2 = query(2 * pos + 2, mid + 1, se, l, r);
        ll ans;
        merge(q1, q2, ans);
        return ans;
    }
    void update(ll pos, ll ss, ll se, ll index, ll value) {
        if (index < ss || index > se)
            return;
        if (ss == se) {
            seg[pos] = value;
            return;
        }
        ll mid = (ss + se) / 2;
        update(2 * pos + 1, ss, mid, index, value);
        update(2 * pos + 2, mid + 1, se, index, value);
        merge(seg[2 * pos + 1], seg[2 * pos + 2], seg[pos]);
    }
};
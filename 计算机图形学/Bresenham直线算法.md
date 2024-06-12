Bresenham算法是一种画直线的算法。

算法原理

设直线斜截式为 `y = kx + b(-1 <= k <= 1)`，当x增加1时，y增加k， 而y为整数，所以要判断y是否增加1，这个过程可以用一个变量p来判断，当x + 1，p + k，判断p 与 0.5的关系，当p >= 0.5，y + 1，并且 p - 1，重复此项过程即可。

为了使代码不出现浮点数，可以对p做放缩变换，对p所在的系统乘上2 \*dx（dx为所画直线的x轴长度），此时判断值y是否增加条件为p是否大于等于dx，p每次增加的值k变为`k*(2*dx) = dy`，y + 1后 p 减去 2 * dx

为了便于计算，可以在初始化时令p为`-0.5`，也就是`-dx`，这样只需要判断p是否大于0

当k为负数的时候只需要y + 1，变为y - 1即可

当k的绝对值大于1时，y的增速较快，此时可以以y为自变量，原理同上。

MFC绘图代码

```c++
// CBresenhamView 绘图

void CBresenhamView::Bline(CDC* pDC, int x0, int y0, int x1, int y1, COLORREF color)
{
	int dx = abs(x1 - x0), dy = abs(y1 - y0);
	if (dx >= dy)
	{
		if (x0 > x1) std::swap(x0, x1);
		int p = -dx;
		int x = x0, y = y0;
		while (x < x1)
		{
			if (p >= 0)
			{
				p -= 2 * dx;
				y += (y1 > y0) ? 1 : -1;
			}
			p += 2 * dy;
			pDC->SetPixel(x, y, color);
			x += 1;
		}
	}
	else
	{
		if (y0 > y1) std::swap(y0, y1);
		int p = -dy;
		int x = x0, y = y0;
		while (y < y1)
		{
			if (p >= 0)
			{
				p -= 2 * dy;
				x += (x1 > x0) ? 1 : -1;
			}
			p += 2 * dx;
			pDC->SetPixel(x, y, color);
			y += 1;
		}
	}
}
```


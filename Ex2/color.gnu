set term X11
set nokey
set pm3d map
set xrange[-pi:pi]
set yrange[-pi:pi]

set cbrange[-1:1]
set palette rgbformulae 22,13,10

splot sin(x*y)
pause -1 
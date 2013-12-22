DocName = "zach"

t:
 latex --src $(DocName).tex
 dvips $(DocName).dvi
c:
 del *.dvi *.mpx *.log *.aux *.toc
co: t
 copy $(DocName).ps $(DocName)-common.ps
my: t
 copy $(DocName).ps $(DocName)-my.ps
 
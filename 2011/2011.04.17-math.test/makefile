DocName="test-math"
t:
  mp --tex=latex pictures.mp
  latex --src $(DocName).tex
all: t
  dvips $(DocName).dvi
  gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps

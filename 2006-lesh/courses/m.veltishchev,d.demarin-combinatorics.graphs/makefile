cc:
	mpost pic
t tex: cc
	latex.exe graph.tex
	dvips graph.dvi
	latex.exe combi.tex
	dvips combi.dvi
p pdf: tex
	gswin32c.exe -sDEVICE=pdfwrite -sOutputFile=graph.pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 graph.ps
	gswin32c.exe -sDEVICE=pdfwrite -sOutputFile=combi.pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 combi.ps
all: p

c clean:
	rm -f *.dvi *.aux *.log *.1

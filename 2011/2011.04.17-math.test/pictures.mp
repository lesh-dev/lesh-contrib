verbatimtex
  \documentclass[a4paper]{article}
  \usepackage[simple]{dmvn}
  \begin{document}
  \pagestyle{empty}
etex

input dmvnmpl;

% ==========================================================
% Fanera
% ==========================================================
beginfig(10);
numeric u; u=1cm;

path p[];
p0 := (0,0)--(1,0)--(1,1)--(0,1)--cycle;

p1 := p0 xscaled 3u yscaled 2u;
p2 := p0 rotated 20 xscaled .5u yscaled .5u;

draw p1 snorm;
draw p2 shifted (2u,1u) snorm;

endfig;

% ==========================================================
% Box
% ==========================================================
beginfig(20);
numeric u; u=.5cm;

path p[];
p0 := (0,0)--(1,0)--(1,1)--(0,1)--cycle;

draw p0 scaled 1u snorm;

endfig;


verbatimtex
  \end{document}
etex

bye

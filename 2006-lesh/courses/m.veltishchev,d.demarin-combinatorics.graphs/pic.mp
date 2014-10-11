input dmvnmpl;
beginfig(1);

numeric u; u = 1cm;

z0 = (0,0);
z1 = (4u,0);
z2 = (0,2u);

drawarrow z0--z1 snorm;
drawarrow z0--z2 snorm;

z4 = (1u,1.8u);
z3 = (.5u,1u);
z5 = (4u,.5u);

draw z0..z3..{dir 0}z4..{dir -10}z5 sbold;

bmp(0,0);

endfig;

end;

figure;
x = -15:0.01:15;
plot(x,(sin(x)./x).^2,'linewidth',4,'k-')
xlabel('x, rel. units')
ylabel('I, rel. units')
print difraction.ps -landscape -F:25
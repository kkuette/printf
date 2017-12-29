#include <fcntl.h>
#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int		main()
{
	char	*line;
	int		fd;
	int		ret;
	setlocale(LC_ALL, "en_US.UTF-8");

	ft_printf("%c\n", 0);
	printf("%c\n", 0);
	ft_printf("%zi\n", LLONG_MIN);
	printf("%zi\n", LLONG_MIN);
	ft_printf("%lc %lc\n", L'暖',L'ح');
	printf("%lc %lc\n", L'暖',L'ح');
	ft_printf("%C\n", L'猫');
	while(1);
	printf("%C\n", L'猫');
	ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n", 
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
}

/**
 * @file symbols.hpp
 * @author PotatoMindPopper (PotatoMindPopper@github)
 * @brief 
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 * @details 
 * 
 */

#ifndef __SYMBOLS_HPP__
#define __SYMBOLS_HPP__

#include <utility>
#include <string>
#include <vector>

// https://en.wikipedia.org/wiki/List_of_mathematical_symbols_by_subject

// - NUMBERS -

/*
Number sets
Symbol	Unicode character	Articles with usage	LaTeX	HTML	Unicode Hex
�
\mathbb {A} 	𝔸	Algebraic number	\mathbb{A}	&Aopf;	U+1D538
�
\mathbb{C} 	ℂ	Complex number	\mathbb{C}, \Complex	&Copf;	U+2102
�
\mathbb {H} 	ℍ	Quaternion	\mathbb{H}, \mathbb{H}	&quaternions;	U+210D
�
\mathbb {N} 	ℕ	Natural number	\mathbb{N}, \N	&Nopf;	U+2115
�
\mathbb {O} 	𝕆	Octonion	\mathbb{O}	&Oopf;	U+1D546
�
\mathbb {Q} 	ℚ	Rational number	\mathbb{Q}, \Q	&Qopf;	U+211A
�
\mathbb {R} 	ℝ	Real number	\mathbb{R}, \R, \Reals	&Ropf;	U+211D
�
\mathbb {S} 	𝕊	Sedenion	\mathbb{S}	&Sopf;	U+1D54A
�
\mathbb {Z} 	ℤ	Integer	\mathbb{Z}, \Z	&Zopf;	U+2124
*/
// -- Number sets --
struct NumberSets {
    static const std::wstring ALGEBRAIC_NUMBER = L"\u1D538";
    static const std::wstring COMPLEX_NUMBER   = L"\u2102";
    static const std::wstring QUATERNION       = L"\u210D";
    static const std::wstring NATURAL_NUMBER   = L"\u2115";
    static const std::wstring OCTONION         = L"\u1D546";
    static const std::wstring RATIONAL_NUMBER  = L"\u211A";
    static const std::wstring REAL_NUMBER      = L"\u211D";
    static const std::wstring SEDENION         = L"\u1D54A";
    static const std::wstring INTEGER          = L"\u2124";
};

/*
Intervals
Symbol	Usage	LaTeX	HTML	Unicode Hex
[
 
 
]
[~~]	
[
�
,
�
]
[a,b]	( )
[ ]	&lpar; &rpar;
&lsqb; &rsqb;	U+0028/9
U+005B/D
*/
// -- Intervals --
struct Intervals {
    static const std::wstring LEFT_PARANTHESIS  = L"\u0028";
    static const std::wstring RIGHT_PARANTHESIS = L"\u0029";
    static const std::wstring LEFT_BRACKET      = L"\u005B";
    static const std::wstring RIGHT_BRACKET     = L"\u005D";
};

/*
Mathematical constants
For symbols of additional mathematical constants, see Mathematical constant.
Symbol	Unicode character	Articles with usage	LaTeX	HTML	Template	Unicode Hex	Note
�\pi 	π	Pi	\pi	&pi;	{{pi}}	U+03C0	
�
e or 
e
\mathrm {e} 	e	e (mathematics)	e or \mathrm{e}	e		U+0065	Recommend {{mvar|e}} or {{math|e}} over e
�\phi 	ϕ	Golden ratio	\phi	&phi;	{{phi}}	U+03C6	
�\varphi 	φ	\varphi	&straightphi;	{{varphi}}	U+03D5	
�
i or 
i
{\displaystyle \mathrm {i} }	i	Imaginary unit	i or \mathrm{i}	i		U+0069	Recommend {{mvar|i}} or {{math|i}} over i
�\gamma 	γ	Euler–Mascheroni constant	\gamma	&gamma;	{{gamma}}	U+03B3	
�\epsilon 	ε	Vacuum permittivity	\epsilon	&epsi;	{{epsilon}}	U+03B5	
�\varepsilon 	ϵ	Dual number	\varepsilon	&varepsilon;	{{varepsilon}}	U+03F5	
�\theta 	θ	Mills' constant	\theta	&theta;	{{theta}}	U+03B8	
�\vartheta 	ϑ	\vartheta	&vartheta;	{{vartheta}}	U+03D1	
�\sigma 	σ	Somos' quadratic recurrence constant	\sigma	&sigma;	{{sigma}}	U+03C3	
�\varsigma 	ς	\varsigma	&varsigma;	{{varsigma}}	U+03C2	
�\kappa 	κ	Einstein gravitational constant	\kappa	&kappa;	{{kappa}}	U+03BA	
�\lambda 	λ	Prouhet–Thue–Morse constant	\lambda	&lambda;	{{lambda}}	U+03BB	
�\mu 	μ	Ramanujan–Soldner constant	\mu	&mu;	{{mu}}	U+03BC	
�\tau 	τ	Prouhet–Thue–Morse constant	\tau	&tau;	{{tau}}	U+03C4	
*/
// -- Mathematical constants --
struct MathematicalConstants {
    static const std::wstring PI         = L"\u03C0";
    static const std::wstring E          = L"\u0065";
    static const std::wstring PHI        = L"\u03C6";
    static const std::wstring VARPHI     = L"\u03D5";
    static const std::wstring I          = L"\u0069";
    static const std::wstring GAMMA      = L"\u03B3";
    static const std::wstring EPSILON    = L"\u03B5";
    static const std::wstring VAREPSILON = L"\u03F5";
    static const std::wstring THETA      = L"\u03B8";
    static const std::wstring VAR_THETA  = L"\u03D1";
    static const std::wstring SIGMA      = L"\u03C3";
    static const std::wstring VARSIGMA   = L"\u03C2";
    static const std::wstring KAPPA      = L"\u03BA";
    static const std::wstring LAMBDA     = L"\u03BB";
    static const std::wstring MU         = L"\u03BC";
    static const std::wstring TAU        = L"\u03C4";
};

/*
Complex numbers
Symbol	Unicode character	Usage	Articles with usage	LaTeX	HTML	Unicode Hex
ℑ\Im 	ℑ	
ℑ
(
2
+
�
)
=
1
{\displaystyle \Im (2+i)=1}	Complex number	\Im	&image;	U+2111
Im
\operatorname {Im} 	Im	
Im
⁡
(
2
+
�
)
=
1
{\displaystyle \operatorname {Im} (2+i)=1}	\operatorname{Im}	Im	
ℜ\Re 	ℜ	
ℜ
(
2
+
�
)
=
2
{\displaystyle \Re (2+i)=2}	\Re	&Rfr;	U+211C
Re
\operatorname {Re} 	Re	
Re
⁡
(
2
+
�
)
=
2
{\displaystyle \operatorname {Re} (2+i)=2}	\operatorname{Re}	Re	
 
¯{\bar {~}}	◌̄	
�
¯{\bar {z}}	Complex conjugate	\bar	&#x304;	U+0304
 
¯
¯{\displaystyle {\bar {\bar {~}}}}	◌̄̄	
�
¯
¯{\displaystyle {\bar {\bar {z}}}}	\bar{\bar{}}	&#x304;&#x304;
 
 
¯{\overline {~~}}	◌̅	
�
¯{\overline {z}}	\overline	&#x305;	U+0305
 
 
¯
¯{\displaystyle {\overline {\overline {~~}}}}	◌̅̅	
�
¯
¯{\displaystyle {\overline {\overline {z}}}}	\overline{\overline{}}	&#x305;&#x305;
∗{}^{\ast }	*	
�
∗z^{\ast }	{}^\ast	&ast;	U+002A
|
 
 
|
|~~|	|	
|
�
|
|z|	Absolute value	\vert	&VerticalLine;	U+007C
arg
⁡
{\displaystyle \arg {}}		
arg
⁡
(
�
)
\arg(z)	Polar coordinate system	\arg		
*/
// -- Complex numbers --
struct ComplexNumbers {
    static const std::wstring IMAGINARY_PART     = L"\u2111";
    static const std::wstring REAL_PART          = L"\u211C";
    static const std::wstring COMBINING_MACRON   = L"\u0304";
    static const std::wstring COMBINING_OVERLINE = L"\u0305";
    static const std::wstring ASTERISK           = L"\u002A";
    static const std::wstring VERTICAL_LINE      = L"\u007C";
};

/*
Elementary arithmetic operations
Symbol	Unicode character	Usage	Articles with usage	LaTeX	HTML	Unicode Hex	Notes
+
+	+	
�
+
�
a+b	Addition	+	&plus;	U+002B	
−-	−	
�
−
�
a-b	Subtraction	-	&minus;	U+2212	
⋅\cdot 	⋅	
�
⋅
�
a\cdot b	Multiplication	\cdot	&sdot;	U+22C5	
×\times 	⨯	
�
×
�
a\times b	\times	&times;	U+2A2F	
:
:	∶  or  :	
�
:
�
a:b	Division (mathematics)	:, \colon	&ratio; or &colon;	U+003A or U+2236	In LaTeX, : added space around the colon 
�
:
�
a:b that \colon does not 
�
:
�
{\displaystyle a\colon b}.
/
/	∕	
�
/
�
a/b	/	&#x2215;	U+2215	
÷\div 	÷	
�
÷
�
a\div b	\div	&divide;	U+00F7	
 
 
 
 
{\frac {~~}{~~}}	⁄	
�
�
{\frac {a}{b}}	\frac{a}{b}
\tfrac{a}{b} (inline)
\dfrac{a}{b} (display)
\cfrac{a}{b} (continued fraction)	&frasl;	U+2044	<sup>a</sup>⁄<sub>b</sub> renders as: a⁄b
−
1
{}^{-1}	⁻	
�
−
1
a^{-1}	Multiplicative inverse	^{-1}		U+207B	
−-	−	
−
�
-a	Additive inverse	-	&minus;	U+2212	
±\pm 	±	
±
�
\pm a	Plus or minus sign	\pm	&plusmn;	U+00B1	
∓\mp 	∓	
∓
�
\mp a	\mp	&mnplus;	U+2213	
*/
// -- Elementary arithmetic operations --
struct ElementaryArithmeticOperations {
    static const std::wstring OPERATIONS_PLUS                   = L"\u002B";
    static const std::wstring OPERATIONS_MINUS                  = L"\u2212";
    static const std::wstring OPERATIONS_MULTIPLICATION         = L"\u22C5";
    static const std::wstring OPERATIONS_TIMES                  = L"\u2A2F";
    static const std::wstring OPERATIONS_COLON                  = L"\u003A";
    static const std::wstring OPERATIONS_RATIO                  = L"\u2236";
    static const std::wstring OPERATIONS_DIVISION               = L"\u2215";
    static const std::wstring OPERATIONS_DIVIDE                 = L"\u00F7";
    static const std::wstring OPERATIONS_FRACTION_SLASH         = L"\u2044";
    static const std::wstring OPERATIONS_MULTIPLICATION_INVERSE = L"\u207B";
    static const std::wstring OPERATIONS_ADDITIVE_INVERSE       = L"\u2212";
    static const std::wstring OPERATIONS_PLUS_MINUS             = L"\u00B1";
    static const std::wstring OPERATIONS_MINUS_PLUS             = L"\u2213";
};

/*
Elementary functions
Symbol	Unicode character	Usage	Articles with usage	LaTeX	HTML	Unicode Hex
{\sqrt {\,}}	√	
�
{\sqrt {x}}	Square root	\sqrt{}	&radic;	U+221A
3
{\displaystyle {\sqrt[{3}]{\,}}}	∛	
�
3
{\sqrt[{3}]{x}}	Cube root	\sqrt[3]{x}	&x221B;	U+221B
4
{\displaystyle {\sqrt[{4}]{\,}}}	∜	
�
4
{\sqrt[{4}]{x}}	Fourth root	\sqrt[4]{x}	&x221C;	U+221C
�
{\displaystyle {\sqrt[{n}]{\,}}}		
�
�
{\sqrt[{n}]{x}}	nth root	\sqrt[n]{}		
%\%	%	
�
%x\,\%	Percentage	\%	&percnt;	U+0025
(
 
 
)
(~~)	( )	
(
�
)
{\displaystyle (x)}	Order of operations	( )	&lpar; &rpar;	U+0028/9
(
1
2
)
{\displaystyle \left({\frac {1}{2}}\right)}	\left( \right)
[
 
 
]
[~~]	[ ]	
[
�
]
[x]	Bracket	[ ]	&lsqb; &rsqb;	U+005B/D
|
 
 
|
|~~|	| |	
|
�
|
|x|	Absolute value	|, \vert	&VerticalLine;	U+007C
{
 
 
}
{\displaystyle \left\{~~\right\}}	{ }	
{
�
}
{\displaystyle \left\{x\right\}}	Fractional part	\{ \}
\lbrace \rbrace	&lcub; &rcub;	U+007B/D
⌈
 
 
⌉\lceil ~~\rceil 	⌈ ⌉	
⌈
�
⌉\lceil x\rceil 	Ceiling and Floor functions	\lceil \rceil	&lceil; &rceil;	U+2308/9
⌊
 
 
⌋\lfloor ~~\rfloor 	⌊ ⌋	
⌊
�
⌋\lfloor x\rfloor 	\lfloor \rfloor	&lfloor; &rfloor;	U+230A/B
⌜
 
 
⌝{\displaystyle \ulcorner ~~\urcorner }	⌜ ⌝	
⌜
�
⌝{\displaystyle \ulcorner x\urcorner }	\ulcorner \urcorner	&ulcorner; &urcorner;	U+231C/D
⌞
 
 
⌟{\displaystyle \llcorner ~~\lrcorner }	⌞ ⌟	
⌞
�
⌟{\displaystyle \llcorner x\lrcorner }	\llcorner \lrcorner	&llcorner; &lrcorner;	U+231E/F
⌢{\displaystyle \frown }	 ⌢​	
�
⌢{\displaystyle {\stackrel {\frown }{x}}}	Cap product	\frown	&frown;	U+2322
⌣\smile 	 ⌣​	
�
⌣{\displaystyle {\stackrel {\smile }{x}}}	Cup product	\smile	&smile;	U+2323
exp
\exp 	exp	
exp
⁡
�
\exp x	Exponential function	\exp	exp	
log
\log 	log	
log
�
⁡
�
{\displaystyle \log _{b}x}	Logarithm	\log or \log_{}	log or log<sub></sub>	
ln
\ln 	ln	
ln
⁡
�
\ln x	Natural logarithm	\ln	ln	
lg
{\displaystyle \lg }	lg	
lg
⁡
�
{\displaystyle \lg x}	Binary logarithm	\lg	lg	
min
\min 	min	
min
{
1
,
2
}
{\displaystyle \min\{1,2\}}	Maxima and minima	\min	min	
max
\max 	max	
max
{
1
,
2
}
{\displaystyle \max\{1,2\}}	\max	max	
inf
\inf	inf	
inf
{
1
,
2
}
{\displaystyle \inf\{1,2\}}	Infimum and supremum	\inf	inf	
sup
\sup 	sup	
sup
{
1
,
2
}
{\displaystyle \sup\{1,2\}}	\sup	sup	
lim inf
\liminf 	liminf	
lim inf
�
→
∞
�
�
{\displaystyle \liminf _{n\to \infty }x_{n}}	Limit inferior and limit superior	\liminf	liminf	
lim
_{\displaystyle \varliminf }	lim	
lim
_
⁡
�
�
{\displaystyle \varliminf x_{n}}	\varliminf	<u>lim</u>
lim sup
\limsup 	limsup	
lim sup
�
→
∞
�
�
{\displaystyle \limsup _{n\to \infty }x_{n}}	\limsup	limsup	
lim
¯{\displaystyle \varlimsup }	lim	
lim
¯
⁡
�
�
{\displaystyle \varlimsup x_{n}}	\varlimsup	<span style="text-decoration:overline;">lim</span>
gcd
\gcd 	gcd	
gcd
(
1
,
2
)
{\displaystyle \gcd(1,2)}	Greatest common divisor	\gcd	gcd	
*/
// --- Elementary functions ---
struct ElementaryFunctions {
    static const std::wstring SQUARE_ROOT             = L"\u221A";
    static const std::wstring CUBE_ROOT               = L"\u221B";
    static const std::wstring FOURTH_ROOT             = L"\u221C";
    static const std::wstring NTH_ROOT                = L"\sqrt[n]{x}";
    static const std::wstring PERCENTAGE              = L"\u0025";
    static const std::wstring LEFT_PARENTHESIS        = L"\u0028";
    static const std::wstring RIGHT_PARENTHESIS       = L"\u0029";
    static const std::wstring LEFT_SQUARE_BRACKET     = L"\u005B";
    static const std::wstring RIGHT_SQUARE_BRACKET    = L"\u005D";
    static const std::wstring VERTICAL_LINE           = L"\u007C";
    static const std::wstring LEFT_CURLY_BRACKET      = L"\u007B";
    static const std::wstring RIGHT_CURLY_BRACKET     = L"\u007D";
    static const std::wstring LEFT_CEILING            = L"\u2308";
    static const std::wstring RIGHT_CEILING           = L"\u2309";
    static const std::wstring LEFT_FLOOR              = L"\u230A";
    static const std::wstring RIGHT_FLOOR             = L"\u230B";
    static const std::wstring UPPER_LEFT_CORNER       = L"\u231C";
    static const std::wstring UPPER_RIGHT_CORNER      = L"\u231D";
    static const std::wstring LOWER_LEFT_CORNER       = L"\u231E";
    static const std::wstring LOWER_RIGHT_CORNER      = L"\u231F";
    static const std::wstring CAP_PRODUCT_FROWN       = L"\u2322";
    static const std::wstring CUP_PRODUCT_SMILE       = L"\u2323";
    static const std::wstring EXPONENTIAL_FUNCTION    = L"\\exp";
    static const std::pair<std::wstring, std::wstring> LOGARITHM = std::make_pair(L"\\log", L"\\log_{}");
    static const std::wstring NATURAL_LOGARITHM       = L"\\ln";
    static const std::wstring BINARY_LOGARITHM        = L"\\lg";
    static const std::wstring MINIMA                  = L"\\min";
    static const std::wstring MAXIMA                  = L"\\max";
    static const std::wstring INFIMUM                 = L"\\inf";
    static const std::wstring SUPREMUM                = L"\\sup";
    static const std::wstring LIMIT_INFERIOR          = L"\\liminf";
    static const std::wstring LIMIT_INFERIOR_2        = L"\\varliminf";
    static const std::wstring LIMIT_SUPERIOR          = L"\\limsup";
    static const std::wstring LIMIT_SUPERIOR_2        = L"\\varlimsup";
    static const std::wstring GREATEST_COMMON_DIVISOR = L"\\gcd";
};

/*
Trigonometric functions
Symbol	Unicode character	Usage	Articles with usage	LaTeX	HTML	Unicode Hex
sin
\sin 	sin	
sin
⁡
�
\sin x	Sine and cosine	\sin	sin	
cos
\cos	cos	
cos
⁡
�
\cos x	\cos	cos	
tan
\tan 	tan	
tan
⁡
�
{\displaystyle \tan x}	Tangent	\tan	tan	
sec
\sec 	sec	
sec
⁡
�
{\displaystyle \sec x}	Trigonometric functions	\sec	sec	
csc
\csc 	csc	
csc
⁡
�
{\displaystyle \csc x}	\csc	csc	
cot
\cot 	cot	
cot
⁡
�
{\displaystyle \cot x}	\cot	cot	
arcsin
{\displaystyle \arcsin }	sin	
arcsin
⁡
�
{\displaystyle \arcsin x}	Inverse trigonometric functions	\arcsin	arcsin	
arccos
\arccos	arccos	
arccos
⁡
�
{\displaystyle \arccos x}	\arccos	arccos	
arctan
\arctan 	arctan	
arctan
⁡
�
\arctan x	\arctan	arctan	
arcsec
{\displaystyle \operatorname {arcsec} }	arcsec	
arcsec
⁡
�
{\displaystyle \operatorname {arcsec} x}	\arcsec	arcsec	
arccsc
{\displaystyle \operatorname {arccsc} }	arccsc	
arccsc
⁡
�
{\displaystyle \operatorname {arccsc} x}	\arccsc	arccsc	
arccot
\operatorname{arccot} 	arccot	
arccot
⁡
�
{\displaystyle \operatorname {arccot} x}	\arccot	arccot	
sinh
{\displaystyle \sinh }	sinh	
sinh
⁡
�
{\displaystyle \sinh x}	Hyperbolic functions	\sinh	sinh	
cosh
{\displaystyle \cosh }	cosh	
cosh
⁡
�
{\displaystyle \cosh x}	\cosh	cosh	
tanh
\tanh	tanh	
tanh
⁡
�
{\displaystyle \tanh x}	\tanh	tanh	
coth
{\displaystyle \coth }	coth	
coth
⁡
�
{\displaystyle \coth x}	\coth	coth	
*/
// --- Trigonometric functions ---
struct TrigonometricFunctions {
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_SINE                 = L"\\sin";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_COSINE               = L"\\cos";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_TANGENT              = L"\\tan";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_SECANT               = L"\\sec";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_COSSECANT            = L"\\csc";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_COTANGENT            = L"\\cot";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCSINE              = L"\\arcsin";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCCOSINE            = L"\\arccos";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCTANGENT           = L"\\arctan";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCSECANT            = L"\\arcsec";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCCOSSECANT         = L"\\arccsc";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_ARCCOTANGENT         = L"\\arccot";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_HYPERBOLIC_SINE      = L"\\sinh";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_HYPERBOLIC_COSINE    = L"\\cosh";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_HYPERBOLIC_TANGENT   = L"\\tanh";
    static const std::wstring TRIGONOMETRIC_FUNCTIONS_HYPERBOLIC_COTANGENT = L"\\coth";
};

/*
Arithmetic comparison
See also: Order relations, Set relations
Symbol	Unicode character	Usage	LaTeX	HTML	Unicode Hex
<
<	<	
�
<
�
a<b	<	&lt;	U+003C
>
>	>	
�
>
�
a>b	>	&gt;	U+003E
≤\leq 	≤	
�
≤
�
a\leq b	\le, \leq	&le;	U+2264
≥\geq 	≥	
�
≥
�
a\geq b	\ge, \geq	&ge;	U+2265
≦\leqq 	≦	
�
≦
�
a\leqq b	\leqq	&LessFullEqual;	U+2266
≧\geqq 	≧	
�
≧
�
a\geqq b	\geqq	&GreaterFullEqual;	U+2267
⩽{\displaystyle \leqslant }	⩽	
�
⩽
�
{\displaystyle a\leqslant b}	\leqslant	&LessSlantEqual	U+2A7D
⩾\geqslant 	⩾	
�
⩾
�
{\displaystyle a\geqslant b}	\geqslant	&GreaterSlantEqual	U+2A7E
≪\ll 	≪	
�
≪
�
a\ll b	\ll	&NestedLessLess;	U+226A
≫\gg 	≫	
�
≫
�
a\gg b	\gg	&NestedGreaterGreater;	U+226B
≲\lesssim 	≲	
�
≲
�
{\displaystyle a\lesssim b}	\lesssim	&lsim;	U+2272
≳\gtrsim	≳	
�
≳
�
{\displaystyle a\gtrsim b}	\gtrsim	&GreaterTilde;	U+2273
⪅{\displaystyle \lessapprox }	⪅	
�
⪅
�
{\displaystyle a\lessapprox b}	\lessapprox	&lessapprox;	U+2A85
⪆{\displaystyle \gtrapprox }	⪆	
�
⪆
�
{\displaystyle a\gtrapprox b}	\gtrapprox	&gap;	U+2A86
Symbol	Unicode character	Usage	LaTeX	HTML	Unicode Hex
≶{\displaystyle \lessgtr }	≶	
�
≶
�
{\displaystyle a\lessgtr b}	\lessgtr	&LessGreater	U+2276
≷{\displaystyle \gtrless }	≷	
�
≷
�
{\displaystyle a\gtrless b}	\gtrless	&GreaterLess;	U+2277
⋚{\displaystyle \lesseqgtr }	⋚	
�
⋚
�
{\displaystyle a\lesseqgtr b}	\lesseqgtr	&LessEqualGreater;	U+22DA
⋛{\displaystyle \gtreqless }	⋛	
�
⋛
�
{\displaystyle a\gtreqless b}	\gtreqless	&GreaterEqualLess;	U+22DB
⪋{\displaystyle \lesseqqgtr }	⪋	
�
⪋
�
{\displaystyle a\lesseqqgtr b}	\lesseqqgtr	&lesseqqgtr;	U+2A8B
⪌{\displaystyle \gtreqqless }	⪌	
�
⪌
�
{\displaystyle a\gtreqqless b}	\gtreqqless	&gtreqqless;	U+2A8C
*/
// -- Arithmetic comparison --
struct ArithmeticComparison {
    static const std::wstring LESS_THAN                               = L"\u003C";
    static const std::wstring GREATER_THAN                            = L"\u003E";
    static const std::wstring LESS_THAN_OR_EQUAL_TO                   = L"\u2264";
    static const std::wstring GREATER_THAN_OR_EQUAL_TO                = L"\u2265";
    static const std::wstring LESS_THAN_OR_EQUAL_TO_FULL              = L"\u2266";
    static const std::wstring GREATER_THAN_OR_EQUAL_TO_FULL           = L"\u2267";
    static const std::wstring LESS_THAN_OR_EQUAL_TO_SLANTED           = L"\u2A7D";
    static const std::wstring GREATER_THAN_OR_EQUAL_TO_SLANTED        = L"\u2A7E";
    static const std::wstring LESS_THAN_NESTED                        = L"\u226A";
    static const std::wstring GREATER_THAN_NESTED                     = L"\u226B";
    static const std::wstring LESS_THAN_SIMILAR                       = L"\u2272";
    static const std::wstring GREATER_THAN_SIMILAR                    = L"\u2273";
    static const std::wstring LESS_THAN_APPROXIMATE                   = L"\u2A85";
    static const std::wstring GREATER_THAN_APPROXIMATE                = L"\u2A86";
    static const std::wstring LESS_THAN_GREATER_THAN                  = L"\u2276";
    static const std::wstring GREATER_THAN_LESS_THAN                  = L"\u2277";
    static const std::wstring LESS_THAN_OR_EQUAL_TO_GREATER_THAN      = L"\u22DA";
    static const std::wstring GREATER_THAN_OR_EQUAL_TO_LESS_THAN      = L"\u22DB";
    static const std::wstring LESS_THAN_OR_EQUAL_TO_GREATER_THAN_FULL = L"\u2A8B";
    static const std::wstring GREATER_THAN_OR_EQUAL_TO_LESS_THAN_FULL = L"\u2A8C";
};

// - Number theory -

// -- Devisibility and modulo --

// -- Combinatorics --

// - Stochastics -

// -- Probability theory --

// -- Statistics --

// - Calculus -

// -- Sequences and series --

// -- Limits --

// -- Differential calculus --

// -- Integral calculus --

// -- Vector calculus --

// -- Asymptotic behaviour --

// - Linear algebra -

// -- Vectors and matrices --

// -- Vector operations --

// -- Matrix operations --

// -- Vector spaces --

// -- Functional analysis --

// - Logic -

// -- Equality signs --

// -- Logical operators --

// -- Quantifiers --

// -- Deduction symbols --

// -- End of proof symbols --

// -- Formal language and strings --

// - Functions and category theory -

// -- Functions --

// -- Morphisms --

// -- Constructions --

// - Set theory -

// -- Definition symbols --

// -- Set construction --

// --- Separator symbols ---

// -- Set operations --

// -- Set relations --

// -- Cardinality --

// -- Equivalence classes/relations --

// - Order theory -

// -- Comparisons --

// -- Binary relations --

// - Algebra -

// -- Group theory --

// -- Field theory --

// -- Ring theory --

// - Geometry -

// -- Euclidean geometry --

// -- Differential geometry --

// -- Topology --

// - Alphanumeric symbols -

// -- Digits --

// -- Alphabets --

// -- Greek letters --

#endif // __SYMBOLS_HPP__

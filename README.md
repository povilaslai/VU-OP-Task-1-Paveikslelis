# Įrėmintas pasisveikinimas

```shell
*********************
*                   *
* Sveikas, Pasauli! *
*                   *
*********************
```

Programa skirta pasisveikinimo, apvilkto į rėmelį, išvedimui į konsolę.

## Veikimo principas

Paleidus programą, komandinėje eilutėje vartotojo yra prašoma suvesti:

* Vardą: *Please enter your name:*
* Rėmelio dydį: *Please enter margin size (0-10):*

Suvedus šiuos duomenis programa konsolėje atspausdina pasisveikinimą, įvilktą į rėmelį, sudarytą iš žvagždučių `*`:

```shell
Please enter your name: Tomas
Please enter margin size (0-10): 2
*******************
*                 *
* Sveikas, Tomas! *
*                 *
*******************
```

Jei vartotojas įveda moterišką vardą, pvz *Jurga*, tai pasisveikinimas *Sveikas* yra automatiškai pakeičiamas žodžiu *Sveika*:

```shell
Please enter your name: Jurga
Please enter margin size (0-10): 5
************************
*                      *
*                      *
*                      *
*                      *
*    Sveika, Jurga!    *
*                      *
*                      *
*                      *
*                      *
************************
```

Jei vartotojas įveda rėmelio dydį, išeinantį iš leistinų rėžių 0-10, tai programa išmeta klaidą ir baigia darbą:

```shell
Please enter your name: Martynas
Please enter margin size (0-10): 100
Error: margin size 100 is out of range (0-10)
```

## Programos diegimas ir paleidimas

* Atsisiųskite programos versiją iš [Releases](https://github.com/rendertom/VU-Objektinis-Programavimas/releases) aplanko ir ją išsiarchyvuokite,
* Komandinėje eilutėje įvykdykite sekančius veiksmus:

```shell
cd nuoroda_į_programos_aplanką
g++ 'main.cpp' -o 'main'
./main
```

### Changelog

* [v1.0](https://github.com/rendertom/VU-OP-Task-1-Paveikslelis/releases/tag/v1.0) Leidžia vartotojui įvesti rėmelio dydį.
* [v0.2](https://github.com/rendertom/VU-OP-Task-1-Paveikslelis/releases/tag/v0.2) Pakeičia žodį *Sveikas* į *Sveika*, atsižvelgiant į vartotojo lytį.
* [v0.1](https://github.com/rendertom/VU-OP-Task-1-Paveikslelis/releases/tag/v0.1) Atspausdina pasisveikinimą su rėmeliu.

/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright 2007 Hrvoje Jasak.  All rights reserved
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Namespace
    physicalConstants

Description
    Physical constants.

\*---------------------------------------------------------------------------*/

#ifndef physicalConstants_H
#define physicalConstants_H

#include "dimensionedTypes.H"

namespace Foam{
    namespace physicalConstant{
        // Avogadro constant 阿伏伽德罗常数(number of molecules in a mole) [mol^{-1}]
        // NIST: 6.02214179e23
        const dimensionedScalar A(
            "A",
            dimensionSet(0,0,0,0,-1,0,0),
            6.02214179e23
        );

        // Universal gas constant [J K^{-1} mol^{-1}];  J = kg m^2 s^{-2}
        // NIST:  8.314472
        const dimensionedScalar Rgas(
            "Rgas",
            dimensionSet(1,2,-2,-1,-1,0,0),
            8.314472
        );

        const dimensionedScalar RR = Rgas*1e3; //[J/(kmol K)]

        // Faraday's constant (charge of electron) [C mol^{-1}];  C = A s
        // NIST:  96485.3399
        const dimensionedScalar F(
            "F",
            dimensionSet(0,0,1,0,-1,1,0),
            96485.3399
        );
        const dimensionedScalar FF=F*1e3;
        // Standard atmosphere pressure [Pa]
    // BIPM 10th Conferance Generale des Poids et Mesures (resolution 4)
        const dimensionedScalar pAtm(
            "pAtm",
            dimensionSet(1,-1,-2,0,0,0,0),
            1.01325e5
        );

    };
}// End namespace Foam
#endif

// ************************************************************************* //
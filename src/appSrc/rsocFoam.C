/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           |
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

Application
    rsocFoam

Description
    Transient solver for the reversible solid fuel cell model , Dec/2020

Developed by
    Zheng Zong (zongzh@gmail.com)

\*---------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <iomanip>

#include "fvCFD.H"
#include "atomicWeights.H"
#include "physicalContants.H"

#include "specie.H"
#include "speciesTable.H"
#include "rsocSpecie.H"

int main(int argc, char *argv[]){
    #include "setRootCase.H"
    // #include "createTime.H"
    std::cout<<"*******"<<endl;
    // cell组件
    // #include
    return 0;
}
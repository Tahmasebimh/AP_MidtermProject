//
// Created by Hossein on 4/16/2020.
//

#include <vector>
#include <iostream>
#include "Solver.h"
#include "../provider/MovementProvider.h"

Cube Solver::solveCubeWithDLS(Cube cube,
                              int lastMovement,
                              int layerCounter,
                              int depth) {
    // 8 is network depth
    if (cube.isSolved() || layerCounter >= depth){
        return cube;
    }
    if (lastMovement != movementProvider.tCW){
        Cube cube1(cube);
        cube1.tCCW();
        Cube t = (solveCubeWithDLS(cube1, movementProvider.tCCW, (layerCounter + 1), depth));
        if (t.isSolved()){
            solvedWayString.push_back("TCCW swapping" );
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.tCCW){
        Cube cube1(cube);
        cube1.tCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.tCW, (layerCounter + 1), depth));
        if (t.isSolved()){
            solvedWayString.push_back("TCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.fCW){
        Cube cube1(cube);
        cube1.fCCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.fCCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("FCCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.fCCW){
        Cube cube1(cube);
        cube1.fCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.fCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("FCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.dCW){
        Cube cube1(cube);
        cube1.dCCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.dCCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("DCCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.dCCW){
        Cube cube1(cube);
        cube1.dCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.dCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("DCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.bCW){
        Cube cube1(cube);
        cube1.bCCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.bCCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("BCCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.bCCW){
        Cube cube1(cube);
        cube1.bCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.bCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("BCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }

            return t;
        }
    }
    if (lastMovement != movementProvider.rCW){
        Cube cube1(cube);
        cube1.rCCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.rCCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("RCCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.rCCW){
        Cube cube1(cube);
        cube1.rCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.rCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("RCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.lCW){
        Cube cube1(cube);
        cube1.lCCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.lCCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("LCCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.lCCW){
        Cube cube1(cube);
        cube1.lCW();
        Cube t =(solveCubeWithDLS(cube1, movementProvider.lCW, (layerCounter + 1), depth));
        if(t.isSolved()){
            solvedWayString.push_back("LCW swapping");
            solvedWayCube.push_back(cube);
            if (layerCounter == 0){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    return cube;
}

void Solver::showWayOfSolving() {
    for (int i = (solvedWayCube.size() - 2); i >= 0; --i) {
        std::cout << solvedWayCube[i] << std::endl;
        std::cout << solvedWayString[i] << std::endl;
    }
    std::cout << solvedWayCube[solvedWayCube.size() - 1] << std::endl;
    std::cout << solvedWayString[solvedWayString.size() - 1] << std::endl;
    solvedWayString.clear();
    solvedWayCube.clear();
}

Cube Solver::solveWithIDS(Cube cube, int maxDepth) {
    size_t counter = 0;
    while(counter < maxDepth){
       Cube t = solveCubeWithDLS(cube, 0, 0, counter);
       if (t.isSolved()){
           return t;
       }else{
           counter++;
       }
    }
    return cube;
}


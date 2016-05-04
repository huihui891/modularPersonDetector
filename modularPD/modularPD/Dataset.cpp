//
//  Dataset.cpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 02/05/2016.
//  Copyright © 2016 Javier Fernandez Marques. All rights reserved.
//

#include "Dataset.hpp"

//----------------------------------------------------------------
// Purpose: Constructor
//
// Author: J. Fernandez
//----------------------------------------------------------------
Dataset::Dataset(const std::string &posTrainPath,const std::string &negTrainPath)
{
    trainSetPaths.push_back(posTrainPath);
    trainSetPaths.push_back(negTrainPath);
}

//----------------------------------------------------------------
// Purpose: Loads both positive and negative sets of images of the
//          training set.
//
// Author: J. Fernandez
//----------------------------------------------------------------
void Dataset::loadTrainingSet()
{
    
}
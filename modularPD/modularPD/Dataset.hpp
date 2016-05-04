//
//  Dataset.hpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 02/05/2016.
//  Copyright © 2016 Javier Fernandez Marques. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>


class Dataset{
public:
    std::vector<cv::Mat> imagesTrainPositive;
    std::vector<cv::Mat> imagesTrainNegative;
    
    Dataset(const std::string &posTrainPath,const std::string &negTrainPath); // Constructor
    void loadTrainingSet();
private:
    std::vector<const std::string> trainSetPaths; // paths to poistive/negative training set directory
};

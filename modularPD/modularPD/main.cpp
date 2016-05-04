//
//  main.cpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 02/05/2016.


#include <iostream>
#include "Dataset.hpp"
#include "FileUtils.hpp"
#include <opencv2/core/core.hpp>

int main(int argc, const char * argv[]) {

    // Nothing implemented here yet... just some tests
    cv::Mat a = cv::Mat::eye(5, 5, CV_8U);
    
    // This is a tests
    std::vector<const std::string> mydirs;
    FileUtils::getListOfFilesInDirectory("/Users/Javier/Desktop", mydirs);
    
    FileUtils::getListOfFilesInDirectory("/Users/Javier/Desktop/ajksjdfa", mydirs);
    
    std::cout << a << std::endl;
}

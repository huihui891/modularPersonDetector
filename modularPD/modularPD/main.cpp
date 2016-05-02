//
//  main.cpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 02/05/2016.
//  Copyright © 2016 Javier Fernandez Marques. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>

int main(int argc, const char * argv[]) {

    cv::Mat a = cv::Mat::eye(5, 5, CV_8U);
    
    // This is a tests
    
    std::cout << a << std::endl;
}

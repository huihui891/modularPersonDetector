//
//  FileUtils.hpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 03/05/2016.
//  Copyright © 2016 Javier Fernandez Marques. All rights reserved.
//

#include <iostream>
#include <vector>

//#include <boost/filesystem.hpp>

class FileUtils{
public:
    
    static void getListOfFilesInDirectory(const std::string &path, std::vector<const std::string> &fileNames);
    static bool directoryExists(const std::string &path);
    
private:
};

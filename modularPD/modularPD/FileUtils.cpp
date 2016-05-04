//
//  FileUtils.cpp
//  modularPD
//
//  Created by Javier Fernández Marqués on 03/05/2016.
//  Copyright © 2016 Javier Fernandez Marques. All rights reserved.
//

#include "FileUtils.hpp"

#include <dirent.h>
#include <sys/stat.h>

//----------------------------------------------------------------
// Purpose: Returns the number of files found in an specific
//          directory
//
// Author: J. Fernandez
//----------------------------------------------------------------
void FileUtils::getListOfFilesInDirectory(const std::string &path,std::vector<const std::string> &fileNames)
{
    if (!directoryExists(path)){
        return;
    }
    
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir (path.c_str())) != NULL) { // open directory
        
        while ((ent = readdir (dir)) != NULL) {
            fileNames.push_back(ent->d_name);
        }
        closedir (dir);
    } else {// could not open directory
        std::cout << "WARNING: Directory: \"" << path << "\" couldn't be opened." << std:: endl;
    }
    

}


//----------------------------------------------------------------
// Purpose: Returns true if directory exists
//
// Author: J. Fernandez
//----------------------------------------------------------------
bool FileUtils::directoryExists(const std::string &path)
{
    struct stat info;
    
    stat( path.c_str(), &info );
    
    if( info.st_mode & S_IFDIR )  // S_ISDIR() doesn't exist on my windows
        return true;
    else{
        printf( "WARNING: \" %s \" is no directory\n", path.c_str() );
        return false;
    }
    
}


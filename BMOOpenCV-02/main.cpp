//
//  main.cpp
//  BMOOpenCV-02
//
//  Created by Breno Medeiros on 28/03/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

//#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    String caminho = "/Users/brenomedeiros/Documents/ProgramasBMO/Cpp/BMOOpenCV-02/BMOOpenCV-02/";
    String caminhoImagens = "/Users/brenomedeiros/Documents/ProgramasBMO/Cpp/BMOOpenCV-02/BMOOpenCV-02/Images/";
    
    Mat testeCor = imread(caminho+"Images/Me.jpeg", CV_LOAD_IMAGE_COLOR);
    Mat testeCinza = imread(caminho+"Images/Me.jpeg", CV_LOAD_IMAGE_GRAYSCALE);
    
    imshow("cor", testeCor);
    imshow("cinza", testeCinza);
    
    imwrite(caminho+"Me-Cinza.jpeg", testeCinza);
    
    waitKey();
    
    return 0;
}

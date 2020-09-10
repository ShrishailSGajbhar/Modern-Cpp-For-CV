#include "homework_3.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

int main() {
  const std::string stylesheet{"style.css"};
  const std::string title{"Image Browser"};
  std::string path_test{" "};
  image_browser::ScoredImage first_image("data/000000.png", 0.0);
  image_browser::ScoredImage second_image("data/000100.png", 0.1);
  image_browser::ScoredImage third_image("data/000200.png", 0.2);

  image_browser::ScoredImage first_image_1("data/000300.png", 0.3);
  image_browser::ScoredImage second_image_1("data/000400.png", 0.4);
  image_browser::ScoredImage third_image_1("data/000500.png", 0.5);

  image_browser::ScoredImage first_image_2("data/000600.png", 0.6);
  image_browser::ScoredImage second_image_2("data/000700.png", 0.7);
  image_browser::ScoredImage third_image_2("data/000800.png", 0.8);

  image_browser::ImageRow image_array = {first_image, second_image,
                                         third_image};
  image_browser::ImageRow image_array_1 = {first_image_1, second_image_1,
                                           third_image_1};
  image_browser::ImageRow image_array_2 = {first_image_2, second_image_2,
                                           third_image_2};

  std::vector<image_browser::ImageRow> images_rows = {
      image_array, image_array_1, image_array_2};

  image_browser::CreateImageBrowser(title, stylesheet, images_rows);

  return 0;
}
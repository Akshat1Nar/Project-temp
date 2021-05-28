extern "C" {
	/*Include ffmpeg header file*/
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>

#include <libavutil/imgutils.h>
#include <libavutil/opt.h>
#include <libavutil/mathematics.h>
#include <libavutil/samplefmt.h>
}

#include<iostream>

bool load_frame(const char* filename, int* width, int* height, unsigned char** data) {

  AVFormatContext* av_format_ctx = avformat_alloc_context();
  if(!av_format_ctx) {
    std::cerr << "Failed to allocate AVFormatContext" << '\n';
    return false;
  }

  if( avformat_open_input(&av_format_ctx, filename, NULL, NULL)!=0 ) {
    std::cerr << "Couldn't open file" << '\n';
    return false;
  }

  return true;
}

int main() {
  const char *url = "/home/baka_/Desktop/Project_temp/sample.mp4";
  int width, height;
  unsigned char** data;

  if (!load_frame(url, &width, &height, data)) {
     std::cerr << "Couldn't load video frame" << '\n';
  }


  return 0;
}

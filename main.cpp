#include <iostream>
#include <uv.h>

int main(int argc, char const* argv[]) {
  uv_loop_t* loop = uv_loop_new();

  std::cout << "before uv_run" << std::endl;
  uv_run(loop, UV_RUN_DEFAULT);
  std::cout << "after  uv_run" << std::endl;
  return 0;
}

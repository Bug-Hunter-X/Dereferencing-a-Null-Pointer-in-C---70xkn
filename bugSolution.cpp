int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; 
  } else {
    std::cerr << "Error: Pointer is null" << std::endl; // Handle the null pointer
  }
  return 0;
}
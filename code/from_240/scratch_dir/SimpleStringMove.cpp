

struct SimpleString {
  SimpleString(SimpleString&& other) noexcept
    : max_size{ other.max_size },
      buffer(other.buffer),
      length(other.length) {
	other.length = 0;
	other.buffer = nullptr;
	other.max_size = 0;
      }
}

  



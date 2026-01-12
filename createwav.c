#include "stdio.h"
#include "string.h"

// create wav header: https://docs.fileformat.com/audio/wav/ 
struct wav_header {
	char riff[4];
	int32_t size;
	char wave[4];
	char fmt[4];
	int32_t chunk_size;
	int16_t format_tag;
	int16_t num_channels;
	int32_t sample_rate;
	int32_t bytes_sec;
	int32_t bytes_sample;
	int32_t bits_sample;
	char data[4];
	int32_t data_len;
}


int main() {
	struct wav_header wh;

	strncpy(wh.riff, "RIFF", 4);
	
}

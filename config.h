#define CMDLENGTH 145
#define DELIMITER " ⏽ "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("~/bin/sb_volume",      0,    5),
  BLOCK("~/bin/sb_package",     3600, 17),
	// BLOCK("~/bin/sb_memory",   5,    17),
	BLOCK("~/bin/sb_weather",     1800, 17),
	BLOCK("~/bin/sb_clock",       60,   17)
};

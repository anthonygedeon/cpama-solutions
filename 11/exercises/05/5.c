void split_time(long total_sec, int *hr, int *min, int *sec) {
	*hr  = total_sec / 10000;
	*min = (total_sec % 10000) / 100;
	*sec = (total_sec % 100);
}

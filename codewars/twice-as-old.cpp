int twice_as_old(int dad, int son) {
	return dad > son * 2 ? dad - 2 * son : son * 2 - dad;
}
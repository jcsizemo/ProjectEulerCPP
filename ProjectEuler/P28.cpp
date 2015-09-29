int p28() {

    int n = 1;
    int sum = 1;
    int step = 2;

    int bounds = 1001 * 1001;

    while (n < bounds) {

        for (int i = 0; i < 4; i++) {
            n += step;
            sum += n;
        }

        step += 2;
    }

    return sum;

}
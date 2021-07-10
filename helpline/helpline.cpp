// g++ -o output test.cpp && ./output


// Time calculation
clock_t tStart = clock();
printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

// Loop through map
map<long long int,long long int>::iterator itr;
for (itr = data.begin(); itr != data.end(); ++itr) {
    cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
}
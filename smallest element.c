printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements:\n");
for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

smallest = secondSmallest = INT_MAX;

for(int i = 0; i < n; i++) {
    if(arr[i] < smallest) {
        secondSmallest = smallest;
        smallest = arr[i];
    }
    else if(arr[i] < secondSmallest && arr[i] != smallest) {
        secondSmallest = arr[i];
    }
}

if(secondSmallest == INT_MAX) {
    printf("No second smallest element exists.\n");
} else {
    printf("Second smallest element = %d\n", secondSmallest);
}

return 0;

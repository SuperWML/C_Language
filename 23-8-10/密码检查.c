#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0;
	int at_last = 0;
	int right = 0;
	scanf("%d", &n);

	while (n--) {
		char arr[101] = {0};
		scanf("%s", arr);
		right = 0;
		at_last = 0;
		int arr_length = strlen(arr);
		if (arr[0] >= '0' && arr[0] <= '9') {
			right = 0;
			goto end;
		}
		if (arr_length < 8) {
			right = 0;
			goto end;
		}
		for (int i = 0; i < arr_length; i++) {
			if ((arr[i] >= 48 && arr[i] <= 57)) {
				at_last += 1;
				continue;
			} else if ((arr[i] >= 65 && arr[i] <= 90)) {
				at_last += 1;
				continue;
			} else if ((arr[i] >= 97 && arr[i] <= 122)) {
				at_last += 1;
				continue;
			} else {
				right = 0;
				goto end;
			}
		}
		if (at_last >= 2) {
			right += 1;
		}
end :
		if (right) {
			printf ("YES\n");
		} else {
			printf ("NO\n");
		}
	}

	return 0;
}


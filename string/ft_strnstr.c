#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len) {
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return (char *)haystack;
	i = 0;
	while (i < len && haystack[i]) {
		j = 0;
		while (i + j < len && haystack[i + j] && haystack[i + j] == needle[j]) {
			j += 1;
			if (needle[j] == '\0')
				return (char *)&haystack[i];
		}
		i += 1;
	}
	return NULL;
}

char *ft_strtrim(char const *s1, char const *set)
{
        size_t i = 0;
        size_t start = 0;
        size_t end;

        if(!s1 || !set)
                return NULL;

        end = ft_strlen(s1) - 1;
        while(s1[i] != '\0' && ft_strchr(set, s1[i]))
        {
                i++;
                start++;
        }
        if (start > end)
                return ft_strdup("");
        while(end > start && ft_strchr(set, s1[end]))
        {
        end--;
        }
        char *trim_s = malloc(sizeof(char) * (end - start + 2));
        i = 0;
        while(start <= end)
        {
                trim_s[i] = s1[start];
                start++;
                i++;
        }
        trim_s[i] = '\0';
        return (trim_s);
}

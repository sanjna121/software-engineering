#include <stdio.h>
struct Bio
{
    char description[50];
    int age;
};
struct InstaProfile
{
    char username[20];
    int followers;
    struct Bio bio;
};
int main()
{
    struct InstaProfile profile = {
        "Sanjna",
        1000,
        {"Student", 20}
    };
    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);
    return 0;
}
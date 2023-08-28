#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
	{
        int hp, mp, atk, def;
        int hp_equip, mp_equip, atk_equip, def_equip;
        scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &atk, &def, &hp_equip, &mp_equip, &atk_equip, &def_equip);
        hp += hp_equip;
        mp += mp_equip;
        atk += atk_equip;
        def += def_equip;
        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;
        if (atk < 0) atk = 0;
        printf("%d\n", hp + 5 * mp + 2 * atk + 2 * def);
    }
    return 0;
}
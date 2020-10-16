#include <stdio.h>
#include <assert.h>

#define G_MERC 3.70
#define G_VENUS 8.87
#define G_MARTE 3.71
#define G_JUPIT 23.12
#define G_SATUR 8.96
#define G_URANO 8.69
#define G_NEPTU 11.0
#define G_PLUTO 0.81
#define G_TIERRA 9.81

#define masa(m) (m/G_TIERRA)
#define peso(masa,gravedad) (masa*gravedad)

#ifndef G_TIERRA
#error No se puede calcular la masa de la persona sin la gravedad de la tierra
#endif

int main(void){

    int pesoUsuario;
    printf("Calcula tu peso en otros planetas!\n");
    printf("Ingresa tu peso: ");
    scanf("%d", &pesoUsuario);
    assert(pesoUsuario > 0);
    float mi_masa = masa(pesoUsuario);
    #undef masa
    printf("\nTu peso en Mercurio es de: %.2f\n",peso(mi_masa,G_MERC));
    printf("Tu peso en Venus es de: %.2f\n",peso(mi_masa,G_VENUS));
    printf("Tu peso en Marte es de: %.2f\n",peso(mi_masa,G_MARTE));
    printf("Tu peso en Jupiter es de: %.2f\n",peso(mi_masa,G_JUPIT));
    printf("Tu peso en Saturno es de: %.2f\n",peso(mi_masa,G_SATUR));
    printf("Tu peso en Urano es de: %.2f\n",peso(mi_masa,G_URANO));
    printf("Tu peso en Neptuno es de: %.2f\n",peso(mi_masa,G_NEPTU));
    printf("Tu peso en Pluton es de: %.2f\n",peso(mi_masa,G_PLUTO));
    return 0;
}
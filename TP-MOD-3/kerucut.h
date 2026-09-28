#ifndef KERUCUT_H_INCLUDED
#define KERUCUT_H_INCLUDED

struct Kerucut {
    float tinggi, jari_jari, volume;
};

void Input_Kerucut(Kerucut &c);
Kerucut* New_Kerucut(float tinggi, float jari_jari);
float Get_Height(Kerucut c);
float Get_Radius(Kerucut c);
float Get_Volume(Kerucut c);
void Set_Height(Kerucut &c, float new_tinggi);
void Set_Radius(Kerucut &c, float new_jari_jari);
bool Is_Valid_Kerucut(Kerucut c);
void Output_Summary_Kerucut(Kerucut c);

#endif // KERUCUT_H_INCLUDED
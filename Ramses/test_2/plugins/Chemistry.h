/// do not modify this file! ///
/*used uplugins start
used uplugins end*/

#ifdef __cplusplus
#include <ValueTypes/value.h>
using namespace FlexitekMath::ValueTypes;
extern "C" {
#else
#define fxValue void
#endif

fxValue* __declspec(dllexport) chem_smiles_to_image(fxValue* sm, fxValue* title, fxValue* wid);
fxValue* __declspec(dllexport) chem_smiles_to_imageName();
fxValue* __declspec(dllexport) chem_smiles_to_imageDescription();
fxValue* __declspec(dllexport) chem_smiles_to_name(fxValue* sm);
fxValue* __declspec(dllexport) chem_smiles_to_nameName();
fxValue* __declspec(dllexport) chem_smiles_to_nameDescription();
fxValue* __declspec(dllexport) chem_name_to_smiles(fxValue* sm);
fxValue* __declspec(dllexport) chem_name_to_smilesName();
fxValue* __declspec(dllexport) chem_name_to_smilesDescription();
fxValue* __declspec(dllexport) chem_smiles_to_formula(fxValue* sm);
fxValue* __declspec(dllexport) chem_smiles_to_formulaName();
fxValue* __declspec(dllexport) chem_smiles_to_formulaDescription();
fxValue* __declspec(dllexport) chem_smiles_to_names(fxValue* sm);
fxValue* __declspec(dllexport) chem_smiles_to_namesName();
fxValue* __declspec(dllexport) chem_smiles_to_namesDescription();
fxValue* __declspec(dllexport) chem_smiles_to_mweight(fxValue* sm);
fxValue* __declspec(dllexport) chem_smiles_to_mweightName();
fxValue* __declspec(dllexport) chem_smiles_to_mweightDescription();
fxValue* __declspec(dllexport) chem_electronic_config(fxValue* arg);
fxValue* __declspec(dllexport) chem_electronic_configName();
fxValue* __declspec(dllexport) chem_electronic_configDescription();
fxValue* __declspec(dllexport) chemical_info_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) chemical_info_formName();
fxValue* __declspec(dllexport) chemical_info_formDescription();
fxValue* __declspec(dllexport) chemical_info_smiles(fxValue* form);
fxValue* __declspec(dllexport) chemical_info_smilesName();
fxValue* __declspec(dllexport) chemical_info_smilesDescription();
fxValue* __declspec(dllexport) chemical_info_formula(fxValue* form);
fxValue* __declspec(dllexport) chemical_info_formulaName();
fxValue* __declspec(dllexport) chemical_info_formulaDescription();
fxValue* __declspec(dllexport) chemical_info_iupac(fxValue* form);
fxValue* __declspec(dllexport) chemical_info_iupacName();
fxValue* __declspec(dllexport) chemical_info_iupacDescription();
fxValue* __declspec(dllexport) chemical_info_mmass(fxValue* form);
fxValue* __declspec(dllexport) chemical_info_mmassName();
fxValue* __declspec(dllexport) chemical_info_mmassDescription();
fxValue* __declspec(dllexport) CHEMICAL_INFO_Form(fxValue* name);

#ifdef __cplusplus
}
#endif
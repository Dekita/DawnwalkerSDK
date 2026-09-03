#include "LiveLinkMvnRetargetAsset.h"

ULiveLinkMvnRetargetAsset::ULiveLinkMvnRetargetAsset() {
    this->m_remapping_convention = EXsensRetargetNamingConvention::Default;
    this->m_skeletal_mesh = NULL;
    this->m_skeleton = NULL;
    this->TPoseAnimation = NULL;
    this->IsForwardY = false;
}

FName ULiveLinkMvnRetargetAsset::GetRemappedBoneNameByConvention(EXsensMapping bone, EXsensRetargetNamingConvention Convention) const {
    return NAME_None;
}

FName ULiveLinkMvnRetargetAsset::GetCustomRemappedBoneName_Implementation(EXsensMapping bone) const {
    return NAME_None;
}



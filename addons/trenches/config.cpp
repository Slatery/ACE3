#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {"ACE_envelope_small","ACE_envelope_big","ACE_envelope_giant","ACE_envelope_vehicle","ACE_envelope_short"};
    weapons[] = {"ACE_EntrenchingTool"};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_interaction"};
    author = ECSTRING(common,ACETeam);
    authors[] = {"Grey", "esteldunedain", "chris579", "Salbei"};
    url = ECSTRING(main,URL);
    version = "3.12.5.40";
		versionStr = "3.12.5.40";
		versionAr[] = {3,12,5,40};
  };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"

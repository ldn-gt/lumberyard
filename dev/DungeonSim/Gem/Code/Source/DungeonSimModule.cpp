
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <DungeonSimSystemComponent.h>

namespace DungeonSim
{
    class DungeonSimModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(DungeonSimModule, "{34A5E650-4746-4D53-9E2D-8997449610A9}", AZ::Module);
        AZ_CLASS_ALLOCATOR(DungeonSimModule, AZ::SystemAllocator, 0);

        DungeonSimModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                DungeonSimSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<DungeonSimSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(DungeonSim_3611ea020cf5458abdf551d9f00625fa, DungeonSim::DungeonSimModule)

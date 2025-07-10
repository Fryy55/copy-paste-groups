#include <Geode/Geode.hpp>

//#include <alphalaneous.improved_group_view/api/GroupViewUpdateEvent.hpp>

#include <Geode/modify/SetGroupIDLayer.hpp>

using namespace geode::prelude;


class $modify(SetGroupIDLayer) {
	$override void onPaste(CCObject*) {
		LevelEditorLayer::get()->pasteGroupState(m_targetObject, m_targetObjects);
		this->updateGroupIDButtons();
		//GroupViewUpdateEvent().post();

		return;
	}
};
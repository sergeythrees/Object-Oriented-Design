#pragma once
#include "stdafx.h"
#include "DocumentItem.h"
#include "AbstractCommand.h"
#include "IImage.h"

class CInsertImageCommand : public CAbstractCommand
{
public:
	CInsertImageCommand(std::vector<CDocumentItem> & items,
		std::shared_ptr<IImage> image, boost::optional<unsigned> position);
protected:
	void DoExecute() override;
	void DoUnexecute() override;

private:
	std::vector<CDocumentItem> & m_items;
	CDocumentItem m_item;
	boost::optional<unsigned> m_position;
};


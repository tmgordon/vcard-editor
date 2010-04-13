#ifndef VCARD_H
#define VCARD_H

#include <QString>
#include <QStringList>

class VCard
{
public:
    VCard(const QString& content = QString());

    QString getContent() const;

    QString getSummary() const;

    int getTagCount() const;
    QString getCompleteTag(int index) const;
    QString getTag(int index) const;
    QStringList getTagProperties(int index) const;
    QString getTagContent(int index) const;

    QList<int> getCompleteTagIndexList(const QString& completeTag) const;
    QList<int> getTagIndexList(const QString& tag) const;

    void insertTag(int index);
    void updateTag(int index, const QString& completeTag, const QString& tagContent);
    void removeTag(int tagIndex);

private:
   QStringList m_contentList;
};

#endif // VCARD_H

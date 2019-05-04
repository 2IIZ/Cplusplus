#ifndef DUREE_H
#define DUREE_H


class duree
{
    public:
        duree(int heures=0, int minutes=0, int secondes=0);
        virtual ~duree();

    protected:

    private:

        int m_heures;
        int m_minutes;
        int m_secondes;
};

#endif // DUREE_H

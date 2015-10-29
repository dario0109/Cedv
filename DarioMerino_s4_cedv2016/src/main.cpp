/*********************************************************************
 * Módulo 2. Curso de Experto en Desarrollo de Videojuegos
 * Autor: Carlos González Morcillo     Carlos.Gonzalez@uclm.es
 *
 * You can redistribute and/or modify this file under the terms of the
 * GNU General Public License ad published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * and later version. See <http://www.gnu.org/licenses/>.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.  
 *********************************************************************/

#include "ExampleApplication.h"

class SimpleExample : public ExampleApplication {
  public : void createScene() {  
  	Ogre::SceneNode* nroca = mSceneMgr->createSceneNode("nroca"); 
    Ogre::Entity *roca = mSceneMgr->createEntity("roca", "cube.mesh"); 
    nroca->attachObject(roca);
    mSceneMgr->getRootSceneNode()->addChild(nroca);
    
 	Ogre::SceneNode* ntronco = mSceneMgr->createSceneNode("ntronco");
    Ogre::Entity *tronco = mSceneMgr->createEntity("tronco", "cube.mesh");
    ntronco->attachObject(tronco);
    mSceneMgr->getRootSceneNode()->addChild(ntronco);

    Ogre::SceneNode* ncabeza = mSceneMgr->createSceneNode("ncabeza");
    Ogre::Entity *cabeza = mSceneMgr->createEntity("cabeza", "cube.mesh");
    ncabeza->attachObject(cabeza);
    ntronco->addChild(ncabeza);

    Ogre::SceneNode* nbase = mSceneMgr->createSceneNode("nbase");
    Ogre::Entity *base = mSceneMgr->createEntity("base", "cube.mesh");
    nbase->attachObject(base);
    ncabeza->addChild(nbase);

    Ogre::SceneNode* nsombrero = mSceneMgr->createSceneNode("nsombrero");
    Ogre::Entity *sombrero = mSceneMgr->createEntity("sombrero", "cube.mesh");
    nsombrero->attachObject(sombrero);
    nbase->addChild(nsombrero);

    Ogre::SceneNode* nbrazoizq = mSceneMgr->createSceneNode("nbrazoizq");
    Ogre::Entity *brazoizq = mSceneMgr->createEntity("brazoizq", "cube.mesh");
    nbrazoizq->attachObject(brazoizq);
    ntronco->addChild(nbrazoizq);

    Ogre::SceneNode* nbrazoder = mSceneMgr->createSceneNode("nbrazoder");
    Ogre::Entity *brazoder = mSceneMgr->createEntity("brazoder", "cube.mesh");
    nbrazoder->attachObject(brazoder);
    ntronco->addChild(nbrazoder);

    Ogre::SceneNode* npiernaizq = mSceneMgr->createSceneNode("npiernaizq");
    Ogre::Entity *piernaizq = mSceneMgr->createEntity("piernaizq", "cube.mesh");
    npiernaizq->attachObject(piernaizq);
    ntronco->addChild(npiernaizq);

    Ogre::SceneNode* npiernader = mSceneMgr->createSceneNode("npiernader");
    Ogre::Entity *piernader = mSceneMgr->createEntity("piernader", "cube.mesh");
    npiernader->attachObject(piernader);
    ntronco->addChild(npiernader);

    Ogre::SceneNode* npieder = mSceneMgr->createSceneNode("npieder");
    Ogre::Entity *pieder = mSceneMgr->createEntity("pieder", "cube.mesh");
    npieder->attachObject(pieder);
    npiernader->addChild(npieder);



    nroca->setPosition(0,7,0);
    nroca->setScale(7,7,7);
    nroca->pitch(Degree(30));
    nroca->roll(Degree(-45));
    ntronco->setPosition(-20,4,0);
    ntronco->setScale(1,3,1);
    ntronco->roll(Degree(17));
    ncabeza->setPosition(0.25,1.35,0);
    ncabeza->setScale(1,0.33,1);
    ncabeza->roll(Degree(-10));
    nbase->setPosition(0.25,2,0);
    nbase->setScale(1,0.15,1);
    nbase->roll(Degree(-30));
    nsombrero->setPosition(0,2.5,0);
    nsombrero->setScale(0.5,3.5,0.5);
    nbrazoder->setScale(0.5,1,0.5);
    nbrazoder->setPosition(-2,0.65,-2.25);
    nbrazoder->roll(Degree(90));
    nbrazoder->pitch(Degree(-30));
    nbrazoizq->setScale(0.5,1,0.5);
    nbrazoizq->setPosition(-2,0.65,2.25);
    nbrazoizq->roll(Degree(100));
    nbrazoizq->pitch(Degree(30));
    npiernaizq->setPosition(-1.75,-1.75,-0.25);
    npiernaizq->setScale(0.5,1,0.5);
    npiernaizq->roll(Degree(-45));
    npiernader->setPosition(1,-1.35,0.5);
    npiernader->setScale(0.5,0.5,0.5);
    npiernader->roll(Degree(35));
    npieder->setPosition(2.25,-1.25,1.75);
    npieder->roll(Degree(90));

    
    

    Ogre::Plane pl1(Ogre::Vector3::UNIT_Y, -5);
    Ogre::MeshManager::getSingleton().createPlane("pl1",Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME,pl1,200,200,1,1,true,1,20,20,Ogre::Vector3::UNIT_Z);
    Ogre::SceneNode* nground = mSceneMgr->createSceneNode("ground");
    Ogre::Entity *ground = mSceneMgr->createEntity("pEnt","pl1");
    ground->setMaterialName("Ground");
    nground->attachObject(ground);
    mSceneMgr->getRootSceneNode()->addChild(nground);

    mSceneMgr->setAmbientLight(Ogre::ColourValue(0.5, 0.5, 0.5));
  }
};

int main(void) {
  SimpleExample example;
  example.go();
  
  return 0;
}

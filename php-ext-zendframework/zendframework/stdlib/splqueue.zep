/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Stdlib;

use Serializable;

/**
 * Serializable version of SplQueue
 */
class SplQueue extends \SplQueue implements Serializable
{
    /**
     * Return an array representing the queue
     *
     * @return array
     */
    public function toArray() -> array
    {
        var item, data = [];

        for item in iterator(this) {
            let data[] = item;
        }
        return data;
    }

    /**
     * Serialize
     *
     * @return string
     */
    public function serialize() -> string
    {
        var serialized, data;

        let data = this->toArray();
        let serialized = serialize(data);

        return serialized;
    }

    /**
     * Unserialize
     *
     * @param  string $data
     * @return void
     */
    public function unserialize(string data) -> void
    {
        var unserialized, item;

        let unserialized = unserialize(data);

        for item in unserialized {
            this->push(item);
        }
    }

}
